# 01_XML
## JSON과 비교
- JSON
```json
{
  "employees":[
    { "firstName":"John", "lastName":"Doe" },
    { "firstName":"Anna", "lastName":"Smith" },
    { "firstName":"Peter", "lastName":"Jones" }
  ]
}
```
- XML
```XML
<?xml version="1.0" encoding="UTF-8"?> //프롤로그
<employees>
  <employee>
    <firstName>John</firstName> <lastName>Doe</lastName>
  </employee>
  <employee>
    <firstName>Anna</firstName> <lastName>Smith</lastName>
  </employee>
  <employee>
    <firstName>Peter</firstName> <lastName>Jones</lastName>
  </employee>
</employees>
```

## 특징
- JSON 보다 무거움(태그 문법으로 인해 같은 데이터를 표현하는데 텍스트가 더 많이 필요함)
- sitemap.xml에 주로 쓰인다.
  - sitemap.xml 이란?
    - SEO(Search Engine Optimization) 최적화 요소 중 하나
    - sitemap.xml을 루트 최상단에 정의 해두면 구글 웹 크롤러가 이 해당 사이트의 모든 페이지를 탐색한다.
    - sitemap.xml이 정의되지 않은 최신 업데이트 되거나 종속적으로 연결되지 않은 페이지들이 누락될수있다.
    - 따라서 SEO에 불리해 질 수 있음.
- sitemap.xml 예시
```xml
<?xml version="1.0" encoding="UTF-8"?>
<urlset xmlns="http://www.sitemaps.org/schemas/sitemap/0.9">
  <url>
    <loc>https://www.example.com/foo.html</loc>
    <lastmod>2022-06-04</lastmod>
  </url>
</urlset>
```
